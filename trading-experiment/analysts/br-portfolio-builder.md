# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-10 (Monday), ~16:17 ET — just after the close**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-07 evening ET. Portfolio figures below are derived from state.md's freshest Robinhood-verified `get_portfolio` read (8/10 ~15:37 ET, seventh and last run of the trading day). I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**NVDA's underweight remains the single largest live gap on the book, essentially unchanged from last week — still not a buy signal.**

| | Gap (pp of pool) |
|---|---|
| NVDA | **−4.25pp UNDER** (10.75% actual vs. 15% target) |
| VTI | +2.69pp over (32.69% vs. 30%) |
| VXUS | +1.57pp over (26.57% vs. 25%) |
| OMCL | −2.18pp under (7.82% vs. 10%) |
| XLE | +0.31pp over (10.31% vs. 10%) — essentially on target |
| Cash | +1.87pp over (11.87% vs. 10%) |

NVDA closed **-2.21% today** (per state.md's 15:37 ET check-in), on no identified company-specific catalyst — BW independently reads it the same way ("normal consolidation... no fundamentals shift"). That matters for how to read this gap: last week the concern was that closing it on a green day would be a rule-2 chase; today NVDA is red, which removes that specific objection, but a red day with no fresh catalyst still isn't a decision under rule 1 — it's the absence of the chase problem, not the presence of a buy signal. **Still monitor-only.** The gap continues to be a price-drift artifact (other sleeves growing their pool share, not a deliberate underweight), and it would be the natural first destination for new capital on a genuine NVDA pullback with a real catalyst — none has appeared.

**The actionable item this cycle is not a trade — it's a process ask sitting in my inbox that I'm resolving today.** BW flagged, across its 10:42 ET and 14:45 ET reports, that XLE's continued rally (+4.43% today, sixth straight extending intraday read) could organically push XLE's pool weight past its 10% satellite target on price alone — a scenario the book has never faced on the satellite side, since only VTI's core-side drift has actually fired a trigger. BW asked me directly to pre-specify a rule now rather than decide live if it fires. See §5 — **resolved this report**, closing a same-day, twice-repeated ask before it becomes a third.

No position currently breaches the book's existing 5pp single-position pool-basis drift trigger.

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 8/10 ~15:37 ET Robinhood-verified read): **pool ≈ $50.5376** = equity $44.5376 + deployable cash $6.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below. **All percentages in this report are % of pool unless explicitly marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (of pool) | Current % (of pool) | Current $ (approx) | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.69% | $16.52 | +2.69pp over (inside drift band) |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.57% | $13.43 | +1.57pp over (inside band) |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20% of equity) | 10.75% | $5.43 | **−4.25pp UNDER — largest gap on the book, see TOP** |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.82% | $3.95 | −2.18pp under (extending its unexplained rally, ~fifth straight up session) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.31% | $5.21 | +0.31pp — on target, but now the book's fastest-moving position (see §5) |
| Cash | — | Dry powder / event-window buffer | 10% | 11.87% | $6.00 | +1.87pp over |
| **Total** | | | **100%** | **100%** | **~$50.54** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. **59.26% actual (+4.26pp OVER)**; Satellite 35% target vs. **28.88% actual (−6.12pp UNDER)**; Cash 10% target vs. **11.87% actual (+1.87pp over)**. Same structural imbalance flagged for weeks — too much core, too little satellite — essentially unchanged from last week's +4.35pp/−6.28pp/+1.89pp read (a rounding-level shift, not a new development). The binding constraint remains rule-6 gate clearance (GEHC/IONQ), not cash or conviction — see §7.

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: both legs comfortably inside their 5pp drift bands, no trigger pressure. Combined core is +4.26pp over target — not recommending a second trim off the back of last week's $2.00 action; one disciplined move per cycle, not continuous fine-tuning, unless a trigger actually fires.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: still 6.12pp under target — the widest shortfall on the book, and it hasn't narrowed materially in a week. NVDA's gap is the headline (monitor-only, see TOP). OMCL is now extending an unexplained rally toward its fifth straight green session with no company catalyst identified by any desk — narrowing its own gap purely on price, same as NVDA's is widening purely on price; neither is a decision, both are drift. XLE is the one satellite that's actually moved meaningfully this week — from -0.07pp last Friday to +0.31pp today, entirely on a six-run intraday extension tied to the Hormuz/oil story. This is the live case addressed in §5.
- **Cash (target 10%)**: 11.87% of pool, above target for a third consecutive reporting cycle. Genuine dry powder, not a stuck floor — the constraint is the closed rule-6 gates on GEHC/IONQ, not a shortage of capital.

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal. 10-year Treasury confirmed **~4.66-4.69%** as of today (TradingEconomics, MacroMicro) — up modestly from last week's 4.6-4.69% range but still below rule 6a's 4.75% two-close threshold; Wednesday's CPI print is the near-term test |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; same rate backdrop as VTI, plus the structural AI-concentration-diversifier case reaffirmed again this cycle (see §8) |
| NVDA | Single-name, AI/semis hypergrowth — MS's fair value (~$150.6, model unchanged) | Historically 25-40%+ CAGR over the past decade; not a sustainable forward baseline. MS's downside gap sits at **~32.5%** (price-move effect only, model unchanged since 7/24). August 26 print (16 days out) is the next real catalyst, now inside JPM's forward-looking radar |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta | ~8-15% long-run. MS's model-unchanged fair value ($53.89) implies **~44.7%** upside at today's price (~$37.09), still the widest discount on the book — narrowing purely on the rally, not on new fundamentals. GS notes two fresh sell-side PT hikes today (Barclays $58, Wells Fargo $40) with the sizing gate still shut an eighth week |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance. MS's oil-adjusted composite gap nominally **~16%** overvalued, but MS explicitly flags this cycle's underlying XOM/CVX data as internally inconsistent (down while oil and XLE itself both rose) — treat the number as directionally "still overvalued," not precise. Do-not-add stance unaffected either way |

**Blended portfolio expectation at current weights**: roughly **8-12% annualized** over a full market cycle — unchanged. Today's market closed soft (S&P/Dow/Nasdaq all roughly -0.1% to -0.3%) with XLE the lone standout (+4.43%) on the Hormuz story; a single mixed day doesn't move any of the five holdings' underlying long-run return assumptions.

## 4. Expected maximum drawdown in a bad year

Per BW's 8/10 ~14:45 ET recession stress test (methodology unchanged for weeks):

- **Blended equity-sleeve estimate: ~-34%**, applied to the current $44.54 equity sleeve implies roughly **-$15.14**, bringing account total value to **~$85.40, an approximate -15.1% whole-account drawdown** — cushioned by the ~54% total-cash allocation (of which $50 is untouched reserve). Unchanged in substance from every recent read; this models a *demand*-driven recession specifically, where XLE stops hedging and starts adding to the drawdown.
- **Per-position estimates (BW, unchanged)**: NVDA -45% to -55%; OMCL -35% to -45% (already -20.8% unrealized, thin-book); VTI -30% to -35%; VXUS -25% to -30% (unhedged FX); **XLE -30% to -45% in a demand recession, but could instead rally in a supply/geopolitical-driven one** — today is a live example of the latter, XLE the only green position on an otherwise soft-to-flat day.
- **Rate-shock channel**: Rule 6a (10yr >4.75%/30yr >5.25% on two consecutive closes) remains untested, but BW flags today's intraday 4.701% touch as the closest approach yet — Wednesday's CPI print is the next real test. Not fired.

**Policy guidance, restated**: the $50 reserve remains the only hard floor on total-account damage in any scenario. Half-size satellite-entry discipline on OMCL and XLE continues to cap even an adverse narrative reversal to a small dollar impact at this account's size.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check plus any trigger-fired reviews below — unchanged.
2. **Single-position drift trigger** (pool-basis, ±5pp, proven bidirectional): **no position currently breaches this** — VTI +2.69pp, VXUS +1.57pp, NVDA -4.25pp, OMCL -2.18pp, XLE +0.31pp all sit comfortably inside the band.
3. **Satellite concentration trigger, NVDA** (unchanged): crossing ~18-20% of equity forces a mandatory trim review. Currently 12.21% of equity — 2.79pp+ of buffer.
4. **NVDA+OMCL combined trigger** (adopted 8/10 ~11:38 ET, this desk endorses): crossing 25% of equity forces a joint review. Currently ~21.1% of equity, ~3.9pp buffer.
5. **NEW — satellite concentration trigger extended to OMCL and XLE, formally adopted this report, resolving BW's 10:42/14:45 ET ask.** NVDA has had an individual satellite concentration cap for weeks; OMCL and XLE never got the parallel mechanism, which is exactly the gap BW's satellite-drift-on-price flag surfaced — a half-size (10%-of-pool-target) satellite position had no purpose-built ceiling of its own, only the wider generic 5pp pool-basis band, which for a 10% target allows a much larger *relative* overweight (up to 15% of pool, a 50% relative drift) than the same absolute band allows VTI (up to 35%, a ~17% relative drift). **Rule: if OMCL or XLE individually crosses 15% of equity, that fires a mandatory trim review at the next scheduled run** — same "forced decision point, not automatic sell" framing as NVDA's own mechanism, and the same 15% numeric threshold for consistency. **Current readings: XLE 11.70% of equity (today's fastest-moving position, six-run extension, ~3.3pp of buffer); OMCL 8.89% of equity (~6.1pp of buffer).** Neither fires today. This directly answers BW's specific scenario ("should a satellite position's own gains ever trigger a trim the way VTI's did") — the answer is yes, via this new mechanism, once XLE (or OMCL) actually crosses the line, not before.
6. **Falsifiable-trigger discipline** (unchanged): no other open time-boxed trigger is currently active on any holding.
7. **Rule 6a (rate-shock trigger)**: unchanged. Current status: 10yr ~4.66-4.70% (closest approach yet to the 4.75% threshold per BW's intraday read), not fired — requires two consecutive closes, not an intraday touch. Wednesday's CPI print is the near-term test for this axis.
8. **XLE hedge-symmetry note**: today's move is the hedge working exactly as designed for a third distinct session this month (8/3, 8/7, now 8/10) — not a reason to add (rule 2, don't chase a sixth straight extending read) and not a reason to trim (it's a gain, thesis intact). The new §5.5 trigger is the mechanism that will actually catch it if the extension keeps compounding past a reasonable ceiling, replacing "watch and hope it doesn't matter" with a written line.

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term.** The oldest holding (NVDA, entered 7/9) is barely a month old. Any gain realized is taxed as ordinary income. The only realized event to date remains last week's $2.00 VTI trim (~$0.04-0.05 gain, immaterial).
- **Tax-loss harvesting readiness, updated**: OMCL's unrealized loss sits around **-20.8%** (per BW's 15:37-adjacent read) — still the book's largest unrealized loss by a wide margin, narrowing slowly as the position bounces. No harvesting action recommended — OMCL is a live, cross-vetting-blocked satellite with the widest DCF discount on the book, not an exit candidate; flagged for the record only.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, no re-buy of the same ticker within 30 days. Not currently applicable.
- **Materiality caveat**: at ~$50.54 deployed, today's tax dollar impact is trivial regardless of action taken. The discipline exists for when the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **Deployable cash is $6.00 (11.87% of pool)** — above the 10% target for a third consecutive reporting cycle. The constraint remains "no cleared gate," not "no cash."
2. **Standing next-dollar priority, unchanged from last week's ordering (GS's own ranking, this desk agrees):**
   - **(a) GEHC, still the top ask.** Eight-plus weeks rule-6-blocked with zero MS DCF or BW risk read started. GS's fresh 8/10 read actually *strengthens* the case for clearing this one first — the CFO-transition item that had added a whisker of caution has now fully resolved cleanly (successor named at Zoetis, an internal interim CFO already in place), removing the one open question and leaving a stable, uncontested, unanimous-Buy thesis sitting entirely on process.
   - **(b) IONQ, second, and now with more caution attached, not less.** GS's Wolfpack short-seller allegation and Morgan Stanley's stake reduction below the 5% threshold both remain live and unrebutted as of today — this desk is not advocating urgency here the way it did before the allegation broke; if anything, the bar for whoever eventually runs this cross-vet just went up.
   - **(c) OMCL's sizing re-test, third.** Now an eighth week open, purely on the standing post-transcript BW sign-off — not this desk's gate, but worth restating that GS logged two fresh sell-side PT hikes today (Barclays, Wells Fargo) that this book still can't act on.
   - **(d) Core (VTI or VXUS) last.** Both at or modestly over target; no case for adding to an already-overweight core sleeve while satellite sits 6.12pp under target.
3. **A new candidate-class angle worth flagging**: fresh WebSearch this cycle finds the AI-concentration story sharpening further — the top 20 S&P 500 names now cited at **49% of the index** and **64% of its 5-year return**, with NVDA alone reported at ~8% of SPY. BlackRock's own house view (also fresh this cycle) specifically names "diversified real returns" — natural-resources, infrastructure/utilities, broad commodities — as a distinct diversification lever from simply adding more broad-market or ex-US exposure. XLE already sits in this book as exactly that kind of real-asset diversifier; GEHC (healthcare) is the next-closest fit in the pipeline. This reinforces, rather than changes, the (a)-then-(b) ordering above.
4. **Cash floor**: holding above target remains appropriate while genuine ideas sit queued behind process, not capital.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **Concentration risk sharpened again, not just repeated.** This cycle's search finds a harder figure than last week's: the top 20 S&P 500 names (not just the top 10) now account for **49% of the index's market cap and 64% of its five-year return**, with the index itself now "35%+ technology" and NVDA alone cited at ~8% of SPY. Last week's flag (top-10 at ~40%) was already a concern; this is the same story one layer deeper — the market's own return has become more, not less, dependent on a narrow slice of names since then.
- **BlackRock's own house framing, refreshed this cycle**: concentration risk is now explicitly expected to drive demand for "tailored and targeted diversification" through the rest of 2026, with "diversified real returns" (natural resources, infrastructure/utilities, toll roads, broad commodities, inflation-linked exposure) named as a distinct tool alongside broader AI-ecosystem exposure and regional diversification. This book's equities/ETFs-only mandate can't reach the inflation-linked-bond leg, but XLE (a genuine real-asset/commodity-cycle diversifier) and VXUS (regional diversification) already implement the two legs that are reachable — this is external validation that the existing satellite/core structure, not just this week's specific trades, is pointed the right direction.
- **Rate story, updated**: 10-year confirmed **~4.66-4.69%** today (TradingEconomics, MacroMicro), a touch firmer than last week's low-4.6s but still below rule 6a's threshold. Wednesday's CPI print is now the specific, dated catalyst that will move this the most in the near term — worth the whole book treating it as the key data point to re-check both this axis and the Hormuz/oil axis together, per BW's own framing today.
- **Market backdrop, for context**: today closed soft and mixed (S&P/Dow/Nasdaq all roughly -0.1% to -0.3%) after last week's unusually strong run (S&P +3.6%, Nasdaq +5.2%) — a normal digestive pause, not a reason to revise any target weight. XLE was the lone standout, entirely idiosyncratic to the Hormuz story, not a broad-market signal.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$50.54 trading pool — all targets and gaps in this report are pool-basis unless marked otherwise): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15%, soft-capped at 18-20% of equity; OMCL 10%; XLE 10%) — Cash 10% (higher during live binary-event windows or an active Rule 6a rate-shock window).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-14 plus 6a): no trade without a fresh catalyst *or without a pre-committed rule-based trigger firing*; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation; Rule 6a (rate-shock pause, 10yr >4.75%/30yr >5.25% on two consecutive closes) — not in effect, 10yr ~4.66-4.70%; NVDA+OMCL combined concentration trigger at 25% of equity (currently ~21.1%, not fired); **new this report — the individual satellite concentration cap (18-20% of equity) previously exclusive to NVDA is now extended to OMCL and XLE at a 15%-of-equity threshold (§5.5), closing BW's twice-repeated satellite-drift-on-price ask; XLE 11.70%, OMCL 8.89%, neither fired.**

**Current live decision point**: **none requiring trade execution today.** No position breaches the 5pp drift trigger. NVDA's -4.25pp underweight is the book's largest gap but remains monitor-only — today's red close removes the chase objection but not the fresh-catalyst requirement. The one genuine action item this cycle was procedural: formally closing BW's satellite-drift-rule ask (done, §5.5) rather than letting it sit open into a third report. Standing process priority unchanged: clear GEHC's rule-6 gate first (now with its CFO-transition caveat fully resolved), then IONQ (thesis intact but now under a live short-seller cloud), then OMCL's sizing re-test.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift (bidirectional), satellite concentration crossing 18-20% of equity for NVDA or 15% of equity for OMCL/XLE individually, 25% combined for NVDA+OMCL, any pre-committed time-box reaching its deadline, or Rule 6a firing.

---

## Cross-check with other analysts

- **BW (8/10, 10:42 ET and 14:45 ET)**: held risk grade at C-, flagged a Hormuz/rate-shock convergence theme (both axes approaching but not firing their thresholds) and, across two reports, asked this desk to pre-specify a satellite-drift-on-price rule — **resolved this report** (§5.5). This desk's read on today's XLE move (hedge working, not a chase or trim signal) matches BW's exactly.
- **GS (8/10, ~15:41 ET)**: reaffirms OMCL #1, closes the GEHC CFO-transition loop cleanly (successor + internal interim named), and restates PTCT's now seven-firm/$90.93-consensus upgrade cluster sitting outside MS's coverage mandate — a process ask this desk isn't positioned to resolve (mandate is MS/BW's to extend or decline), but notes GEHC's cleared CFO caveat as a reason to prioritize it first, consistent with this report's own ordering in §7.
- **MS (8/10, ~09:44 ET)**: NVDA/OMCL price-only rolls, models unchanged. XLE flagged with a genuine data-quality problem (XOM/CVX quotes moving opposite to oil and XLE's own tape) — this desk's do-not-add stance on XLE holds regardless, and the new §5.5 trigger is a price-based mechanism that doesn't depend on resolving MS's data conflict.
- **JPM (8/10, ~market open)**: no covered name inside the 2-week earnings window, but NVDA and CRWD both now confirmed for August 26 (16 days out) — worth this desk noting that NVDA's contingency-plan-style pre-committed earnings rule (which BW asked for 8/10 ~11:38 ET) should get drafted in the next 1-2 runs, ahead of the window actually opening ~8/12.

---

Sources:
- [The AI Supercycle: Navigating Concentration Risk in 2026 (ETF.com)](https://etfdb.com/news/2026/01/09/navigating-concentration-risk-2026/)
- [Too Much Tech in Your Portfolio? ETFs to Help You Diversify (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/too-much-tech-portfolio-etfs-153200469.html)
- [2026 Market Outlook Revisited: Diversification Finally Matters Again (SPY/ST Signals)](https://spystsignals.substack.com/p/2026-market-outlook-revisited-diversification)
- [Two Timely Ways to Diversify Beyond Mega-Cap Tech Right Now (AdvisorAnalyst)](https://advisoranalyst.com/2026/08/09/two-timely-ways-to-diversify-beyond-mega-cap-tech-right-now.html/)
- [Mega-Cap Exposure & S&P 500 Concentration (BlackRock)](https://www.blackrock.com/us/financial-professionals/insights/fine-tuning-megacaps-build-etfs)
- [Global AI investment opportunities and risk: Concerns about concentration again? (J.P. Morgan Asset Management)](https://am.jpmorgan.com/sg/en/asset-management/per/insights/market-insights/mid-year-outlook-2026/global-ai-investment-opportunities-and-risk-concerns-about-concentration-again/)
- [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [US - 10-Year Treasury Yield (MacroMicro)](https://en.macromicro.me/series/354/10year-bond-yield)
- [Mortgage Rates Hold Steady Amid Rising Treasury Yields (The Mortgage Reports)](https://themortgagereports.com/mortgage-rates-now/mortgage-rates-today-august-10-2026)
- Internal: trading-experiment/state.md (8/10 Balance history and Run notes through the 15:37 ET close, Strategy & theories rules 1-14/6a), analysts/bw-risk-assessment.md (8/10 ~14:45 ET), analysts/gs-stock-screener.md (8/10 ~15:41 ET), analysts/ms-dcf-valuation.md (8/10 ~09:44 ET), analysts/jpm-earnings-analyzer.md (8/10 ~market open)
