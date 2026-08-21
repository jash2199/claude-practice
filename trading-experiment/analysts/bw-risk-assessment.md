# BW Risk Assessment — Risk Management Report
**Date: 2026-08-21 (~14:40 ET, Friday)** — next BW read after this morning's 09:36 ET run. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time, plus independent WebSearch verification of rates/CDS/Hormuz. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM.

---

## Overall Portfolio Risk Grade: **C+** (held)

## Single biggest risk right now
**Unchanged from this morning, and that is itself the point: five days out from the NVDA/CRWD print and the Warsh keynote, nothing has de-risked — it has just sat at the same tight buffers all day.** Three things, still compounding:

1. **NVDA + CRWD report Wednesday 8/26 after the close (5 days out); Fed Chair Warsh's first Jackson Hole keynote follows 8/27–29.** Zero hedging capacity under the equities-only mandate. JPM's data stands: 3 of NVDA's last 4 next-day reactions were negative despite beats on both lines.
2. **Rate-shock trigger (rule 6a) is still one confirmed close away from firing.** 10yr steady at 4.71% (4bps of buffer to 4.75%); 30yr steady at 5.25% — sitting exactly on its own threshold for a second straight session. Today's official close (market shuts 16:00 ET, ~80 minutes from this report) is the one that could complete the two-consecutive-closes test on the 30yr leg. This desk flags it explicitly: **if the 30yr closes at or above 5.25% today, that is the second consecutive qualifying close (Thursday's close was also 5.25%) and rule 6a should be treated as fired at the next run** — don't let an ambiguous "at the line, not above it" reading cost a run's worth of delay in acknowledging a fire.
3. **NVDA's 5pp pool-drift trigger buffer is unchanged at ~0.56pp** — still the tightest on file, still one rally away from firing on price action alone, still five days from a print that could easily supply that rally.

**Still not a call to trim NVDA pre-earnings** — rule 15 and the 8/14 contingency plan stand. But "the team's collective posture is unchanged" is not the same claim as "the risk is stable," and eight straight runs of flat-buffer readings into event week is worth saying plainly rather than re-logging as background noise a ninth time.

Secondary, unchanged: GEHC's price-gated entry ($70 ceiling, $74.44 last) continues to hold as designed; not a current-book risk.

---

## Live position snapshot (Robinhood-verified)

| Symbol | Qty | Avg cost | Price now | Day chg | Since-cost | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $215.21 | −0.76% | +6.86% | $5.34 | 11.98% | 10.56% |
| VTI | 0.043290 | $370.76 | $378.12 | +0.41% | +1.99% | $16.37 | 36.69% | 32.34% |
| VXUS | 0.154525 | $84.13 | $87.73 | +0.80% | +4.28% | $13.56 | 30.39% | 26.79% |
| OMCL | 0.106405 | $46.99 | $35.87 | +1.04% | −23.67% | $3.82 | 8.56% | 7.54% |
| XLE | 0.086775 | $57.62 | $63.67 | −0.13% | +10.50% | $5.52 | 12.38% | 10.92% |
| **Cash (deployable)** | — | — | — | — | — | $6.00 | — | 11.86% |

Equity = $44.611 (Robinhood-verified `get_portfolio`), total account = $100.611 (cash $56.00, of which ~$50 is the untouchable reserve and $6.00 is trading-pool cash), pool ≈ $50.611. **NVDA+OMCL combined = 20.54% of equity** — under the 25% combined trigger, buffer ~4.46pp. NVDA solo (11.98%) is comfortably under the 18–20% single-name trigger. OMCL remains the book's only losing position at −23.67% since cost, ticking up slightly today (+1.04%) but still deeply negative with no identified catalyst behind either the slide or today's bounce.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.54% of equity combined, ~4.46pp under the 25% trigger |
| **NVDA pool-drift trigger proximity** | 🟠 Medium-High (unchanged, still tightest on file) | −4.44pp gap vs. the 15% target = ~0.56pp of headroom to the 5pp mandatory-review line |
| Correlation / lack of true diversification | 🔴 High | VTI + VXUS both long-only equity beta; NVDA a levered slice of VTI's own top holding; nothing negatively correlated to a broad risk-off tape |
| Sector concentration | 🟡 Medium | AI/mega-cap-tech (NVDA + VTI's embedded tech weight) remains the book's single largest factor bet, now 5 days from its own binary catalyst |
| Geographic / currency exposure | 🟡 Medium | ~69.6% of equity USD-domestic; VXUS (30.4%) the only unhedged FX sleeve |
| **Interest-rate / duration sensitivity** | 🟠 Medium-High (watch today's close) | 10yr 4.71% (4bps of buffer), 30yr 5.25% for a second straight session — today's official close is the one that could complete the two-close test |
| Geopolitical / Hormuz-oil shock | 🟡 Medium | Still unsigned, no full reopening; rule-3 OXY veto stands; XLE continues to do its hedge job |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | OMCL smallest, most-volatile, hardest to exit in size of the five holdings |
| **Binary-event stacking (NVDA/CRWD print + Jackson Hole)** | 🔴 High | 8/26 print (5d out) and Warsh's 8/27–29 keynote overlap the same week — two distinct binary catalysts, one holding, zero options hedging capacity |
| Recession / broad drawdown | 🟡 Medium | See stress test — no position is recession-proof |
| Hedging capacity | 🔴 High (structural gap) | Equities-only, ~$50 pool — cash is the only real hedge and only 11.86% of pool is in it, essentially flat for weeks |

---

## Correlation analysis
- **VTI vs. VXUS**: moved together again today (+0.41%, +0.80%) — the standard high-correlation pairing. Unremarkable on a green day, but the same pairing moves together on red days too, which is the point.
- **NVDA vs. VTI**: NVDA is economically a levered, undiversified slice of VTI's largest sector bet. Diverged today (NVDA −0.76% vs. VTI +0.41%) — ordinary single-name noise, five days before NVDA's own binary event, not yet a signal of anything.
- **XLE vs. everything else**: still the book's one plausible low/negative-correlation holding, though today it was the day's laggard (−0.13%) while the rest of the book was green — a reminder its hedge behavior is regime-dependent, not a standing property.
- **OMCL**: lowest measured correlation to the other four, and that continues to mean "poorly understood, still bleeding" rather than "diversifying benefit." A position down ~23.7% with no identified catalyst for the slide, ticking up today with no identified catalyst for that either, is not evidence of a working diversifier.
- **GEHC (candidate, not held)**: unchanged — a genuinely defensive, low-beta name, still not price-eligible.

## Sector concentration (equity-value basis)
- AI/semiconductors (direct): NVDA ≈ 11.98%
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.69% (embeds a further unquantified tech overweight — VTI's own top holdings skew mega-cap tech, so the book's *effective* AI/tech exposure runs meaningfully above the 11.98% headline NVDA figure)
- International developed + EM: VXUS ≈ 30.39%
- Healthcare IT: OMCL ≈ 8.56%
- Energy: XLE ≈ 12.38%

Roughly half the book (NVDA direct + VTI's embedded tech weight) remains a single concentrated bet on AI/mega-cap-tech multiples, now inside the same week that bet's binary catalyst lands.

## Geographic exposure and currency risk
- USD-domestic: NVDA, OMCL, XLE, VTI ≈ 69.6% of equity.
- VXUS ≈ 30.4% is the entire non-USD sleeve — developed-ex-US + EM, fully unhedged. This remains the book's single largest currency bet; per BR's own read, its 2026 outperformance has been partly dollar-driven, so a dollar reversal compresses that sleeve's return independent of the underlying companies' fundamentals.

## Interest-rate sensitivity by position
- **NVDA**: high — MS's DCF continues to show a meaningful downside gap at higher discount rates; every basis point the discount rate moves compounds directly onto an already-stretched multiple. The 30yr sitting exactly at its trigger line for a second session is the closest this metric has come to firing since this desk started tracking it.
- **OMCL**: high — small-cap growth healthcare IT, discount-rate sensitive, compounded by an already-deep, unexplained drawdown.
- **VTI**: moderate-high — mega-cap/tech-heavy, inherits much of NVDA's duration in aggregate.
- **VXUS**: moderate — somewhat lower duration than VTI, not immune.
- **XLE**: low, arguably inverse — driven by the oil premium, not rates.
- **GEHC (candidate)**: moderate — defensive cash flows lower equity-duration, but MS's own build shows FY26 free cash flow proof only a fraction of the $1.6B guide — a leverage/refinancing sensitivity that compounds with, not independent of, rate risk if rates stay elevated.

## Recession stress test (illustrative peak drawdown)
| Position | Est. drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | −45% to −60% | High-beta semis/AI drew down ~45–65% in 2022; recession adds demand downside on top of the current valuation stretch |
| VTI | −25% to −35% | Broad US market recession range, high end given elevated valuations/duration |
| VXUS | −25% to −35% | Similar; EM sleeve adds tail variance |
| OMCL | −35% to −50% | Small-cap growth healthcare IT, compounded by a visible idiosyncratic drawdown already in progress |
| XLE | −30% to −55% | Wide by design: demand-shock recession hits energy hardest; a supply-shock/inflationary recession could see it hold or rally |

**Blended estimate**: roughly −30% to −40% peak-to-trough on the ~$44.61 equity sleeve (≈ $13–18), pool-level −26% to −36% since cash is largely untouched. Trivial in absolute dollars at this book size; the percentage is the number that should discipline sizing as the account scales — unchanged from prior reports, and that consistency is itself worth noting.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — effectively unlimited at this account size.
- OMCL: **Medium** — mid/small-cap, the one position with non-negligible exit cost if sold in size, and the one whose price action (both the slide and today's bounce) remains least explicable.

## Single-stock risk and position-sizing recommendations
- NVDA (11.98% of equity) and OMCL (8.56%) remain the only true single-name risk; combined 20.54% sits under both hard triggers, no forced review fires today.
- **Recommendation, stated plainly, unchanged from this morning**: do not let the 8/27 NVDA-target debate become a reason to *add* to NVDA before the print. If the drift trigger fires, let it do its job as a mandatory review — don't pre-empt it with a purchase that makes a fire more likely.
- Rule 6a (rate shock): 10yr 4.71% (4bps of buffer), 30yr 5.25% — at the line for a second consecutive session. **This desk is not calling it fired yet** (today's close isn't in, and the prior session's 5.25% print needs to be confirmed as a genuine qualifying close rather than an at-the-line read), but the two-close test could complete at today's 16:00 ET close, roughly 80 minutes after this report. Flagging so the next run checks the confirmed close first thing rather than re-pulling an intraday snapshot.
- On GEHC sizing: unchanged — endorse $2.50 quarter-size only paired with entry ≤ ~$70, cash-neutral VTI-funded swap. GEHC at $74.44 remains ~6.3% above the ceiling; no new information today changes the gate.

## Tail risk scenarios
| Scenario | Rough probability (next 5–10 trading days) | Portfolio impact |
|---|---|---|
| NVDA prints in-line-to-good but the market sells it anyway (JPM: 3 of last 4 next-day reactions negative despite beats) | ~50–60% | Concentrated hit to NVDA + VTI's embedded tech weight; the book's written contingency plan is the live test case, 5 days away |
| Rate-shock trigger (rule 6a) fires on today's or Monday's close | ~35–45% (raised again — 30yr has now sat at the exact threshold two sessions running) | Multiple-compression concentrated in NVDA/OMCL/VTI's tech-heavy core, compounding rather than diversifying the earnings-reaction risk |
| NVDA's 5pp pool-drift trigger fires purely on a pre-print rally (no fresh catalyst needed — only ~0.56pp of headroom) | ~15–20% | Mandatory review forced mid-event-week; not itself a loss scenario, but a decision-under-pressure scenario the team should pre-commit a response to now |
| Chip-sector-specific stress reasserts into the print | ~20–25% | Compounds the earnings-reaction risk rather than being independent of it |
| Hormuz escalation (fresh kinetic exchange) | ~15–20% | Oil spikes (XLE up), but broad risk-off likely drags NVDA/VTI/VXUS harder than XLE's gain offsets — net negative |
| Hormuz durably de-escalates (real signed reopening) | ~10–15% | Oil gives back gains, XLE lags, everything else relieved-rally; net positive |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **Binary-event stacking (NVDA/CRWD print + Jackson Hole, top risk this run)**: no options toolbox, so the only lever is what's already in place — position-sizing discipline (both single-name triggers hold, with real but thinning buffers) and the pre-committed post-print reaction rule. **Standing ask, repeated because it remains unanswered**: an explicit, written response for what happens if the NVDA drift trigger fires from price action alone mid-week, decided now rather than live under pressure during the print/keynote window.
2. **Rate-shock proximity**: no bond/cash-equivalent ETF held, so still no direct hedge. If 6a fires at today's close, the standing equities-only response holds: pause any NVDA/OMCL/GEHC add, let XLE's low duration do the ballast work.
3. **Correlation / no-ballast risk**: cash remains the only real lever at this scale. Defend the 11.86%-of-pool floor through the earnings-and-Fed window; do not spend it down on a premium GEHC entry regardless of how tempting a "buy the dip" framing gets on a red day inside this window specifically.

## Rebalancing suggestions
- **NVDA**: −4.44pp under a 15% pool target — the tightest the 5pp drift trigger buffer has been all week. **Do not close this gap via purchase before 8/26**, regardless of which target policy the 8/27 decision lands on.
- VTI +2.34pp over a 30% pool target, VXUS +1.79pp over 25% — both inside the 5pp band, no rebalance action warranted on today's numbers alone.
- OMCL −2.46pp under a 10% pool target — standing read unchanged: the drawdown (and today's bounce) remain unexplained; not a valuation-driven add case regardless of MS's DCF discount.
- XLE +0.92pp — essentially on target, no action.
- Cash at 11.86% of pool, above the 10% floor — **defend this floor through 8/29** (print + keynote window); the one lever the book actually has this week.
- If new capital deploys, preference order unchanged: (1) let deployable cash sit at or above its current level through the event window; (2) any equity add should favor the lowest-correlation candidate at the right price (GEHC, still not there); NVDA remains the least-preferred add on risk grounds this week specifically.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*

**Sources this run**: [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield), [30 year bond yield (TradingEconomics)](https://tradingeconomics.com/united-states/30-year-bond-yield), [30-year Treasury yield tops 5.33%, new 19-year high (CNBC, 8/18 context)](https://www.cnbc.com/2026/08/18/treasury-yields-.html), [Nvidia's credit default swaps surpass July peak (Seeking Alpha)](https://seekingalpha.com/news/4634471-nvidias-credit-default-swaps-surpass-july-peak), [Nvidia's rising CDS the talk of Wall Street (Investing.com)](https://www.investing.com/news/stock-market-news/nvidias-rising-cds-the-talk-of-wall-street-amid-circular-financing-fears-4816626), [Iran, Oman Reach Agreement on Proposed Strait of Hormuz Shipping Route (Bloomberg)](https://www.bloomberg.com/news/articles/2026-08-05/iran-says-agreement-on-hormuz-shipping-route-reached-with-oman), [2026 Strait of Hormuz crisis (Wikipedia, background)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis), plus Robinhood live quotes/positions/portfolio and the four sibling analyst reports (BR 8/20, MS 8/21, GS 8/21, JPM 8/21) + state.md.
