# BW Risk Assessment — Risk Management Report
**Date: 2026-08-21 (Friday)** — next BW read after 8/20 ~14:45 ET. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time, plus independent WebSearch verification of rates/tape/CDS. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM.

---

## Overall Portfolio Risk Grade: **C+** (held)

## Single biggest risk right now
**The book is walking into a stacked binary-event week with its tightest-ever buffer on the one drift trigger that's closest to firing — and the team's collective posture toward both is "nothing to see here."** Three things compound, not stack independently:

1. **NVDA + CRWD both report Wednesday 8/26 after the close (5 days out), and Fed Chair Warsh delivers his first Jackson Hole keynote 8/27–29 — one to three trading days *after* the print.** This book holds NVDA through both events with zero hedging capacity (equities-only mandate). JPM's own data: 3 of NVDA's last 4 next-day reactions were negative *despite beats* on both lines, and the options market is pricing a ~6.99% implied move against a ~2.8% trailing-average actual move. That gap between what the market is pricing and what the stock has historically done is itself informative — the market expects something to break the recent pattern of muted moves, in either direction.
2. **The 30-year yield is sitting right at its own rule-6a trigger line (~5.25%) today, and the 10-year (~4.71%) is within 4bps of its own 4.75% threshold** — both closer to firing than at any point in the last two weeks of BW reports. Neither has fired (needs two consecutive closes above threshold), but "hasn't fired yet" is doing a lot of work in a week where a Fed Chair is about to speak on the record about the exact policy question driving the move.
3. **The book's own 5pp single-position pool-drift trigger on NVDA now has a ~0.56pp buffer — the tightest it has ever been**, per this run's live numbers (NVDA at 10.56% of pool vs. a 15% target = −4.44pp gap). BR's team has been treating this gap as a policy-target argument to resolve on 8/27. This desk's read is blunter: **if NVDA rallies into the print — which is exactly what a "beat and this time the market believes it" scenario looks like — this trigger could fire from price action alone, in the same week as the earnings decision and the Fed keynote.** That is not a hypothetical low-probability tail; it is the single most mechanically plausible way for three separate risk items to hit in the same 5-day window.

**This is not a call to trim NVDA pre-earnings — rule 15's no-pre-earnings-trim discipline and the 8/14 contingency plan stand, and this desk isn't asking to relitigate them.** It is a plain statement that the team has spent two weeks calling this window's risk "unchanged" while the actual math (buffer shrinking, rates approaching the line, a second binary event now overlapping the first) has been quietly tightening underneath that framing. Radical transparency: **"no structural break yet" is true and also is not the same claim as "risk is stable."** It has not been stable — it has been compressing toward three simultaneous trigger conditions, and this run is the first to say so plainly rather than log each piece separately as background noise.

Secondary, unchanged: GEHC's price-gated entry ($70 ceiling, $74.07 last) continues to hold as designed; not a current-book risk.

---

## Live position snapshot (Robinhood-verified)

| Symbol | Qty | Avg cost | Price now | Day chg | Since-cost | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $214.85 | −0.92% | +6.68% | $5.33 | 11.98% | 10.56% |
| VTI | 0.043290 | $370.76 | $377.48 | +0.24% | +1.81% | $16.34 | 36.70% | 32.34% |
| VXUS | 0.154525 | $84.13 | $87.615 | +0.67% | +4.14% | $13.54 | 30.40% | 26.79% |
| OMCL | 0.106405 | $46.99 | $35.46 | −0.11% | −24.54% | $3.77 | 8.47% | 7.47% |
| XLE | 0.086775 | $57.62 | $63.83 | +0.13% | +10.78% | $5.54 | 12.44% | 10.96% |
| **Cash (deployable)** | — | — | — | — | — | $6.00 | — | 11.87% |

Equity = $44.5292 (Robinhood-verified `get_portfolio`), total account = $100.5292 (cash $56.00, of which ~$50 is the untouchable reserve and $6.00 is trading-pool cash), pool ≈ $50.5292. **NVDA+OMCL combined = 20.45% of equity** — under the 25% combined trigger, buffer ~4.55pp. NVDA solo (11.98%) is comfortably under the 18–20% single-name trigger. OMCL remains the book's only losing position, now −24.54% since cost, deepening again this week with no identified catalyst — this desk continues to flag the *unexplained* nature of that slide as the actual concern, not the magnitude alone.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.45% of equity combined, ~4.55pp under the 25% trigger |
| **NVDA pool-drift trigger proximity** | 🟠 Medium-High (escalated) | −4.44pp gap vs. BR's 15% target = only ~0.56pp of headroom to the 5pp mandatory-review line — tightest buffer on file |
| Correlation / lack of true diversification | 🔴 High | VTI + VXUS both long-only equity beta; NVDA a levered slice of VTI's own top holding; nothing negatively correlated to a broad risk-off tape |
| Sector concentration | 🟡 Medium | AI/mega-cap-tech (NVDA + VTI's embedded tech weight) remains the book's single largest factor bet, now walking into its own binary-event week |
| Geographic / currency exposure | 🟡 Medium | ~70% of equity USD-domestic; VXUS (30.4%) the only unhedged FX sleeve |
| **Interest-rate / duration sensitivity** | 🟠 Medium-High (escalated) | 10yr ~4.71% (4bps from the 4.75% threshold), 30yr ~5.25% (at the threshold) — closest either metric has been to firing rule 6a since this desk started tracking it |
| Geopolitical / Hormuz-oil shock | 🟡 Medium | Still unsigned; rule-3 OXY veto stands; XLE continues to do its hedge job |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | OMCL smallest, most-volatile, hardest to exit in size of the five holdings |
| **Binary-event stacking (NVDA/CRWD print + Jackson Hole)** | 🔴 High (new this run) | 8/26 print (5d out) and Warsh's 8/27–29 keynote now overlap in the same week — two distinct binary catalysts, one holding, zero options hedging capacity |
| Recession / broad drawdown | 🟡 Medium | See stress test — no position is recession-proof |
| Hedging capacity | 🔴 High (structural gap) | Equities-only, ~$50 pool — cash is the only real hedge and only 11.87% of pool is in it, unchanged for weeks |

---

## Correlation analysis
- **VTI vs. VXUS**: moved in the same direction again today (+0.24%, +0.67%) — the standard high-correlation pairing, unremarkable on a calm day but the same pairing that moved together on last Thursday's sell-off too. Correlation doesn't turn off when it's inconvenient to remember.
- **NVDA vs. VTI**: NVDA is economically a levered, undiversified slice of VTI's largest sector bet. They diverged slightly today (NVDA −0.92% vs. VTI +0.24%) — normal single-name noise, not a signal, five days before NVDA's own binary event.
- **XLE vs. everything else**: still the book's one plausible low/negative-correlation holding. It has done its job on red days for weeks; that streak is a reason to keep it, not a reason to assume it will keep working — its correlation to broad equities is regime-dependent (it will move *with* equities in a demand-shock recession, which the stress test below prices in).
- **OMCL**: lowest measured correlation to the other four, and that continues to mean "poorly understood, still bleeding" rather than "diversifying benefit." A position that has fallen ~24.5% with no identified catalyst is not evidence of low correlation working in the book's favor — it's evidence the book doesn't have a clean explanation for its largest percentage loser.
- **GEHC (candidate, not held)**: unchanged — a genuinely defensive, low-beta name, still not price-eligible.

## Sector concentration (equity-value basis)
- AI/semiconductors (direct): NVDA ≈ 11.98%
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.70% (embeds a further unquantified tech overweight — VTI's own top holdings skew mega-cap tech, meaning the book's *effective* AI/tech exposure is meaningfully above the 11.98% headline NVDA figure)
- International developed + EM: VXUS ≈ 30.40%
- Healthcare IT: OMCL ≈ 8.47%
- Energy: XLE ≈ 12.44%

Roughly half the book (NVDA direct + VTI's embedded tech weight) remains a single concentrated bet on AI/mega-cap-tech multiples, now entering the exact week that bet's binary catalyst lands.

## Geographic exposure and currency risk
- USD-domestic: NVDA, OMCL, XLE, VTI ≈ 69.6% of equity.
- VXUS ≈ 30.4% is the entire non-USD sleeve — developed-ex-US + EM, fully unhedged. This remains the book's single largest currency bet, and per BR's own read, its 2026 outperformance has been partly dollar-driven — a dollar reversal compresses that sleeve's return in a way that has nothing to do with the underlying companies.

## Interest-rate sensitivity by position
- **NVDA**: high — MS's DCF still shows ~30.7% downside at an 11% WACC; every basis point the discount rate moves compounds directly onto an already-stretched multiple. The 30yr sitting at its own trigger line this run is the closest this desk has come to saying "watch this line into Monday's close."
- **OMCL**: high — small-cap growth healthcare IT, discount-rate sensitive, compounded by an already-deep, unexplained drawdown.
- **VTI**: moderate-high — mega-cap/tech-heavy, inherits much of NVDA's duration in aggregate.
- **VXUS**: moderate — somewhat lower duration than VTI, not immune.
- **XLE**: low, arguably inverse — driven by the oil premium, not rates.
- **GEHC (candidate)**: moderate — defensive cash flows lower equity-duration, but MS's own build now shows FY26 free cash flow proof only ~$68M actual against a $1.6B guide — a leverage/refinancing sensitivity that compounds with, not independent of, rate risk if rates stay elevated.

## Recession stress test (illustrative peak drawdown)
| Position | Est. drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | −45% to −60% | High-beta semis/AI drew down ~45–65% in 2022; recession adds demand downside on top of the current valuation stretch |
| VTI | −25% to −35% | Broad US market recession range, high end given elevated valuations/duration |
| VXUS | −25% to −35% | Similar; EM sleeve adds tail variance |
| OMCL | −35% to −50% | Small-cap growth healthcare IT, compounded by a visible idiosyncratic drawdown already in progress |
| XLE | −30% to −55% | Wide by design: demand-shock recession hits energy hardest; a supply-shock/inflationary recession could see it hold or rally |

**Blended estimate**: roughly −30% to −40% peak-to-trough on the ~$44.53 equity sleeve (≈ $13–18), pool-level −26% to −36% since cash is largely untouched. Trivial in absolute dollars at this book size; the percentage is the number that should discipline sizing as the account scales — this remains unchanged from prior reports, and that consistency is itself worth noting: nothing about the recession math has been softened, even as this desk escalates the near-term (non-recession) risk items above.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — effectively unlimited at this account size.
- OMCL: **Medium** — mid/small-cap, the one position with non-negligible exit cost if sold in size, and the one whose price action is least explicable right now, which argues against treating any given day's tight spread as durable.

## Single-stock risk and position-sizing recommendations
- NVDA (11.98% of equity) and OMCL (8.47%) remain the only true single-name risk; combined 20.45% sits under both hard triggers, no forced review fires today.
- **Recommendation, stated plainly**: do not let the 8/27 NVDA-target debate (BR's "revise to 11% vs. keep 15% with a rule-based add") become a reason to *add* to NVDA before the print. Whatever the policy target should be, the position-sizing answer into a binary-event week with the drift trigger this close to firing is to let the trigger — if it fires — do its job as a **mandatory review**, not to pre-empt it with a purchase that would make a fire more likely, not less.
- Hold both single-name triggers and the 25% combined trigger as hard mandatory-review lines, not soft guidance — unchanged recommendation, now more load-bearing than in prior cycles given how close the NVDA drift gap sits to its own threshold.
- Rule 6a (rate shock): 10yr ~4.71% (4bps of buffer), 30yr ~5.25% (at the line). **This desk is not calling the trigger fired** — it requires two consecutive closes above threshold, and this run's read is a single snapshot — but the buffer language used in the last several BW reports ("a real buffer," "well below") is no longer accurate and this desk is retiring it as of this run.
- On GEHC sizing: unchanged — endorse $2.50 quarter-size only paired with entry ≤ ~$70, cash-neutral VTI-funded swap. No new information today changes the gate.

## Tail risk scenarios
| Scenario | Rough probability (next 5–10 trading days) | Portfolio impact |
|---|---|---|
| NVDA prints in-line-to-good but the market sells it anyway (JPM's own historical read: 3 of last 4 next-day reactions negative despite beats) | ~50–60% | Concentrated hit to NVDA + VTI's embedded tech weight; the book's written contingency plan (no pre-print trim, structural-break-only post-print reaction) is the live test case, five days away |
| Rate-shock trigger (rule 6a) fires on two consecutive closes, landing in the same window as the earnings reaction and/or the Warsh keynote | ~25–35% (raised from last cycle's 20–30% given today's proximity to both thresholds) | Multiple-compression concentrated in NVDA/OMCL/VTI's tech-heavy core, compounding rather than diversifying the earnings-reaction risk |
| NVDA's 5pp pool-drift trigger fires purely on a pre-print rally (no fresh catalyst needed — only ~0.56pp of headroom) | ~15–20% | Mandatory review forced mid-event-week; not itself a loss scenario, but a decision-under-pressure scenario the team should pre-commit a response to now, not after it fires |
| Chip-sector-specific stress reasserts into the print (SOX still down on the week despite its rebound off the July lows) | ~20–25% | Compounds the earnings-reaction risk rather than being independent of it |
| Hormuz escalation (fresh kinetic exchange) | ~15–20% | Oil spikes (XLE up), but broad risk-off likely drags NVDA/VTI/VXUS harder than XLE's gain offsets — net negative |
| Hormuz durably de-escalates (real signed reopening) | ~10–15% | Oil gives back gains, XLE lags, everything else relieved-rally; net positive |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **Binary-event stacking (NVDA/CRWD print + Jackson Hole, top risk this run)**: no options toolbox, so the only lever is what's already in place — position-sizing discipline (both single-name triggers hold, with real but thinning buffers) and the pre-committed post-print reaction rule. **This desk's one concrete ask**: before 8/26, have an explicit, written answer for what happens if the NVDA drift trigger fires *from price action alone* mid-week — deciding that in the moment, during an earnings-and-Fed-keynote week, is exactly the kind of same-minute decision rule 14/15's discipline was built to prevent, and right now there is no pre-committed answer for that specific sequencing.
2. **Rate-shock proximity**: no bond/cash-equivalent ETF held, so there is still no direct hedge. If 6a fires, the standing equities-only response holds: pause any NVDA/OMCL/GEHC add, let XLE's low duration do the ballast work. Flagging now, a run ahead of a plausible fire, rather than after.
3. **Correlation / no-ballast risk**: cash remains the only real lever at this scale. Defend the 11.87%-of-pool floor through the earnings-and-Fed window; do not spend it down on a premium GEHC entry regardless of how tempting a "buy the dip" framing gets on a red day inside this window specifically.

## Rebalancing suggestions
- **NVDA**: −4.44pp under a 15% pool target (or −0.44pp under BR's proposed 11% revision) — the tightest the 5pp drift trigger buffer has ever been. **Do not close this gap via purchase before 8/26** regardless of which target policy the 8/27 decision lands on; per rule 16, let any pre-print trigger fire resolve as a mandatory review, not a green light to buy.
- VTI +2.34pp over a 30% pool target, VXUS +1.79pp over 25% — both inside the 5pp band, no rebalance action warranted on today's numbers alone.
- OMCL −2.53pp under a 10% pool target — this desk's standing read is unchanged: the drawdown is unexplained, not clearly a valuation opportunity or a broken thesis, and sizing into an unexplained decline is not this desk's recommendation regardless of MS's DCF discount.
- XLE +0.96pp — essentially on target, no action.
- Cash at 11.87% of pool, above the 10% floor — **defend this floor through 8/29** (print + keynote window); this is the one lever the book actually has this week.
- If new capital deploys, this desk's preference order for risk remains unchanged: (1) let deployable cash sit at or above its current level through the event window; (2) any equity add should favor the lowest-correlation candidate at the right price (GEHC, still not there); NVDA remains the least-preferred add on risk grounds this week specifically, regardless of BR's underweight framing.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*

**Sources this run**: [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield), [30 year bond yield (TradingEconomics)](https://tradingeconomics.com/united-states/30-year-bond-yield), [Stock market today: Dow, S&P 500, Nasdaq rise as bitcoin surges (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-friday-august-21-dow-sp-500-nasdaq-080533702.html), [Stock Market Today (Aug. 21, 2026): S&P 500 rises following sharp sell-off (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-aug-21-2026), [Nvidia's credit default swaps surpass July peak (Seeking Alpha)](https://seekingalpha.com/news/4634471-nvidias-credit-default-swaps-surpass-july-peak), [Nvidia's rising CDS the talk of Wall Street (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/nvidia-rising-cds-talk-123955612.html), plus Robinhood live quotes/positions/portfolio and the four sibling analyst reports (BR 8/20, MS 8/21, GS 8/21, JPM 8/21) + state.md.
