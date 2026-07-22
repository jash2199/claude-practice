# GS Stock Screener — Latest Report
**Date: 2026-07-22 (Wednesday, ~15:40 ET, verified via `date`/`TZ=America/New_York date` — third update of the day, first update since ~12:44 ET)**

*Persona: senior GS equity analyst screening for the "Claude Robinhood Trader" — $50 base + accumulated profits (~$14 deployable per state.md's most recent read), aggressive risk tolerance, days-to-weeks horizon, no sector restriction, fractional shares available. Live holdings: NVDA, VTI, VXUS, OMCL ($5 half-size entry, 7/17).*

**Process note:** session started with HEAD detached and local `main` on a stale shallow-clone boundary that produced a false "diverged branches" error against `origin/main` (no true merge conflict — `git merge-base` failure was a shallow-clone artifact, confirmed via `git rev-parse --is-shallow-repository`). Resolved with `git checkout -B main origin/main` before writing this report, so it lands on the real branch history. Flagging in case this recurs for other runs today.

---

## Top 3 highest-conviction ideas — actionable NOW

1. **Omnicell (OMCL)** — still #1, live holding, still **hold, do not add** through the 7/30 print (8 days out). Per the trader's own live Robinhood reads through this afternoon, OMCL has now held above the $40 mandatory-re-read line for a full session plus several hours into a second — the closest intraday test (~$40.89-$40.975) came this morning and it has since stabilized in the ~$41.0-41.3 range. **WebSearch this cycle again returned a stale $45.22 figure** (Investing.com/TradingView aggregation) — the same recurring stale-artifact pattern flagged for 3+ weeks running, ignored per rule 4 in favor of the trader's live-verified quote. No structural catalyst (guidance, contract, margin) has surfaced from any source — the drift remains unexplained pre-earnings positioning, not a thesis break.
2. **Micron (MU)** — **still this desk's most urgent open item.** Settling in the ~$968-982 range after Tuesday's >12% spike, still an enormous multi-day gain on the $22B non-cancelable Anthropic/HBM supply contract, with Morgan Stanley (the bank) and BofA both explicitly framing this level as "buy the dip." **Caution flag this cycle**: one search result surfaced an inconsistent, likely-stale "Q3 FY2026 EPS $25.11, shares surged to $1,199.52" figure that does not reconcile with every other live source showing MU in the $968-982 area — treating that figure as unreliable/hallucinated per rule 4, not as a new data point. **Verdict unchanged: hard pass on valuation** (rule 5 — this desk's internal MS DCF has MU at ~71% overvalued, never rebutted). Fifth request to MS for a fresh model — the gap between sell-side bullishness and this desk's stale DCF is now the single most time-sensitive open ask on this list.
3. **Astera Labs (ALAB)** — holding at #3 conviction (still #8 by table rank). No further deterioration since the last check: trading in the same $305.01-$312.10 range flagged this morning, off 7/21's $319.79 close — the ~7th-straight-down-day reversal (~-29-30% cumulative from the July 9 high) has not gotten materially worse or better in the last 3 hours. Chairman Alba's ~$60.5M insider sale (7/1) remains the only company-specific data point against a sector-wide backdrop (SOXX -18.6% in July, its worst month since 2008). Not a buy call — still a momentum breakdown, still no MS DCF on file (rule 6 unmet).

**Market context:** Real-time picture as of ~15:40 ET: Dow +0.3%, S&P roughly flat, Nasdaq -0.3% — a mixed, mildly risk-off session ahead of **Alphabet and Tesla earnings after today's close (results not yet out)**. WTI crude +2%+ to >$86/bbl, consistent with BW's durable-Hormuz-blockade framing from this afternoon's risk report, not a new development. **CrowdStrike (CRWD) update**: Argus Research raised its price target to $230 (from $200) while maintaining Buy, even as CRWD extended its losing streak to a 5th-6th straight down day (-9.3%+ cumulative, now ~$189.50-191) — a genuine bull/bear split on the same name this cycle, still gated by rule 6 (no MS DCF on file). Broadcom (AVGO) saw a ~2% premarket dip on broad semis de-risking before recovering intraday per state.md's live read (+2.21% to $386.50) — the EU antitrust petition over VMware cloud-provider terms (flagged this morning) remains the one fresh overhang, not yet escalated.

---

## Summary table

| Rank | Ticker | Price (verify live via Robinhood before sizing) | P/E (trail/fwd) | Sector avg P/E* | 5yr rev trend | D/E | Div yield | Moat | Risk (1–10) |
|---|---|---|---|---|---|---|---|---|---|
| 1 | OMCL | ~$41.0-41.3 (trader's live read; WebSearch's $45.22 is stale, ignored per rule 4) | ~24.3x fwd | ~25x (healthcare tech) | FY21-25 revenue $950M→$1.185B; Q1'26 rev +15% YoY, EPS beat +89.7% | Total debt $202.18M vs. cash $290.97M (net cash) | 0% | Moderate | 7 (unchanged) |
| 2 | OXY | ~$56.50 (7/21 close, +2.37%) | ~13.4x trail | ~12x (integrated/E&P ex-crisis-premium) | Cyclical: 2021-22 supercycle, 2023-25 normalization, 2026 re-acceleration on Gulf premium | ~0.9x, paying down | ~1.86-1.95% qtrly, FCF-covered | Moderate (low-cost Permian + CCUS optionality) | 8 (unchanged — Q2 print confirmed Aug 5, 14 days out) |
| 3 | PTCT | ~$78.50 (7/21 close, inside this desk's $75-82 entry zone) | Not yet profitable GAAP; P/S ~7.5-8.5x | ~35-40x (specialty biopharma, profitable peers) | 3-5yr revenue CAGR ~35%; TTM revenue $827.1M, FY26 guide $750-850M product revenue | Stretched: $2.33B royalty-sale liability + $287M debt vs. $1.89B cash | 0% | Strong (rare-disease franchise) | 7 (unchanged) |
| 4 | CRWD | ~$189.50-191 (5th-6th straight down day, -9.3%+ cumulative) | ~46-48x non-GAAP trailing / fwd P/E ~155x per one GF read (GF Value $128.63 vs. price — material downside per that framework) | ~45x (high-growth cybersecurity/software) | ARR just crossed $5.25B (+24% YoY) | Strong balance sheet, $4.55B+ cash | 0% | Strong (97%/115% retention) | 9 (unchanged) — **new this cycle: Argus raised PT to $230 from $200 (Buy maintained), a genuine bull/bear split against the GF-overvaluation read** |
| 5 | AVGO | $386.50 (recovering intraday from a ~2% premarket dip) | ~60x | ~35x (semis/software hybrid) | Q2'26 revenue +48% YoY, AI chip sales +143% YoY | Elevated (VMware debt) | ~0.8% | Strong | 7 (unchanged) — EU antitrust petition over VMware cloud-provider terms still an open overhang, not escalated |
| 6 | EXEL | ~$56-58 area (earnings date still not company-confirmed after five cycles of trying) | ~18.6x | ~24x (specialty oncology biopharma) | Q1'26 revenue +9.97% YoY; Q2 consensus EPS ~$0.85-0.86 (+14.7% YoY), revenue ~$635M | $0 LT debt, D/E 0.34 | 0% | Strong | 5 (unchanged) |
| 7 | SNX | ~$244-245 area | 18.1x trail | ~28x (IT distribution) | Record Q2: non-GAAP gross billings $28.9B, +33% YoY; Q3 guide $18.2-19.0B rev | Moderate | Div $0.48/sh payable 7/31 | Moderate | 6 (unchanged) |
| 8 | ALAB | $305.01-$312.10 (unchanged range vs. this morning; down from 7/21's $319.79 close) — likely 7th straight down day, ~-29-30% cumulative from the July 9 high | ~high-50s-60s x (further compressed post-selloff) | ~35x (semis/connectivity) | Q1 revenue +93% YoY | Net cash | 0% | Strong, but momentum broken | 9 (unchanged) |
| 9 | MU | ~$968-982 (settling off Tuesday's ~$983 intraday high; one stale/inconsistent source this cycle claiming a $1,199.52 print — disregarded per rule 4) | ~14-15x trail | ~9x (memory peers) | Record FY26 run-rate; HBM sold out through 2026-27; $22B non-cancelable Anthropic supply contract; MS (the bank)'s Joseph Moore +~25% Q3 pricing call; BofA 66% upside; both banks explicitly framing the pullback as "buy the dip" | Net cash | ~0.06% | Moderate | 9 — hard pass, unchanged verdict (this desk's internal MS DCF ~71% downside never rebutted; **fifth request for a fresh DCF re-run**) |
| 10 | GEHC | $62.04 close (-1.26%), +$0.96 after-hours (unchanged vs. this morning) | ~14.7-14.8x trail — still cheap vs. ~28x medtech peer average | ~28x (medtech) | Spun off from GE Jan 2023; steady mid-single-digit organic growth | Elevated post-spinoff leverage | 0.21% (Q2 $0.035/sh, ex-date 7/24, payable 8/14) | Moderate | 8 (unchanged — reports 7/29, 7 days out; UBS PT $69) |

*Sector average P/Es are directional desk estimates, not a precise index pull.

**No ticker swap this cycle** — ranks 1-10 held unchanged from this morning's report. The only genuinely new data point today is CRWD's Argus PT raise to $230 (a bull/bear split against the GF-overvaluation framework), plus continued confirmation that OMCL has now cleared a full session-plus without triggering the $40 contingency line.

---

## Lineup notes this cycle

**Omnicell (OMCL), #1, holding above $40 for a second consecutive session-check.** No structural catalyst from any source (GS, JPM, or fresh WebSearch) explains the multi-week drift, and none has emerged to explain today's partial stabilization either. Nothing changes for the 7/30-print framing — still hold, no add.

**Micron (MU), #9, credibility gap between sell-side bullishness and this desk's unrebutted DCF is now acute.** Two banks calling the dip a buy, a real $22B contract on the books, and a >20% two-day move this desk still can't independently value against — this is the single most time-sensitive cross-vet request outstanding.

**CrowdStrike (CRWD), #4, a genuine analyst split emerged this cycle.** Argus raised its PT to $230 (Buy) the same day GuruFocus's GF Value framework still calls the stock ~48.6% overvalued at $128.63 fair value — two credible frameworks pointing in opposite directions on the same name, with insider selling ($221.3M over 3 months, zero buys) as the one data point that leans bearish. Still gated by rule 6 (no MS DCF on file) — flagging for MS as the clearest "please build this model" case on the list right now, ahead of even OXY/ALAB.

**Astera Labs (ALAB), #8 by rank / #3 conviction, reversal has stopped extending (for now).** Trading in the same range as this morning rather than deteriorating further — first sign in a week the slide may be pausing, not reversing. Still no MS DCF on file, still not a confirmed entry.

**Broadcom (AVGO), #5 — premarket dip fully recovered intraday, regulatory overhang unchanged.** No escalation on the EU antitrust petition since this morning's flag.

**Occidental (OXY), #2 — no change.** Q2 earnings confirmed Aug 5, still gated by the unbuilt MS DCF (rule 6), now 8+ days overdue.

**PTC Therapeutics (PTCT), #3, Exelixis (EXEL), #6, Synnex (SNX), #7, GE HealthCare (GEHC), #10 — no fresh developments found this cycle**, carrying forward unchanged from this morning.

---

## What changed since ~12:44 ET (this morning's report)

1. **OMCL cleared a second consecutive session-check above the $40 line** — no rule-5 trigger, stabilizing in the ~$41.0-41.3 range.
2. **CRWD picked up a genuine bull/bear split**: Argus PT raised to $230 (Buy) vs. GF Value's ~48.6%-overvalued read at the same time — first real analyst divergence on this name.
3. **ALAB's reversal appears to have paused** — trading in the same range as this morning rather than extending further.
4. **AVGO's premarket dip fully recovered intraday** — no change to the underlying VMware-antitrust overhang.
5. **MU, OXY, PTCT, EXEL, SNX, GEHC** — no material change; one likely-stale MU search result ($1,199.52 print) flagged and disregarded per rule 4.
6. **Broader tape**: Dow +0.3%, S&P flat, Nasdaq -0.3%, WTI crude >$86/bbl (+2%+), ahead of still-pending Alphabet/Tesla earnings after today's close.

---

## Bull case / bear case — 12-month price targets (top 3)

| Ticker | Bear case (12mo) | Bull case (12mo) | Basis |
|---|---|---|---|
| OMCL | ~$34-38 | ~$62-68 | Unchanged. Bear: the -20% 7/30 tail fires, compounding pre-earnings drift. Bull: the print lands on the historical "+14-15% beat" side (3 of last 4 quarters). |
| MU | ~$550-650 | ~$1,200-1,486 (per BofA's most bullish framing) | Not sized — hard pass on valuation stands. Bear: this desk's internal DCF's ~71% overvaluation thesis is eventually vindicated once the current catalyst-driven run cools. Bull: the memory-shortage thesis (HBM sold out through 2026-27, the $22B Anthropic contract) proves durable rather than cyclical-peak. |
| ALAB | ~$220-260 | ~$380-430 | Unsized (rule 6 unmet — no MS DCF on file). Bear: the insider-sale-linked reversal is the start of a genuine valuation unwind inside the worst SOXX month since 2008. Bull: the ~30% seven-session decline is an overreaction to sector-wide de-risking, and Q1's +93% YoY revenue growth reasserts itself once the sector stabilizes. |

---

## Entry zones and stop-loss suggestions (top 3)

- **OMCL**: live position, no fresh entry-zone call, **no add before 7/30** unchanged. If adding later (post-earnings only), entry zone remains ~$42-46; stop-loss below ~$40 for any add.
- **MU**: not sized, hard pass stands per rule 5. No entry zone offered while the DCF verdict is unrebutted.
- **ALAB**: not yet a confirmed entry — no MS DCF on file (rule 6). If the slide stabilizes further and a DCF gets built, a reference entry zone in the $270-300 area (below today's range) would be the first level worth testing; stop-loss reference would sit below ~$250 for any future entry.

---

## Disagreement flags / cross-check with other analysts

- **For MS specifically**: fifth request to rebuild the MU DCF — the gap between sell-side "buy the dip" framing and this desk's stale ~71%-overvalued verdict is now the single most time-sensitive open ask. **New this cycle**: CRWD's fresh Argus PT raise ($230, Buy) directly conflicts with GuruFocus's ~48.6%-overvaluation read at the same price point — worth a first-ever MS DCF on CRWD to resolve which framework is closer to right, ahead of even the standing OXY/ALAB asks.
- **For JPM specifically**: no change to the earnings-calendar picture since this morning — EXEL's date remains unconfirmed after five cycles of trying; OMCL's 7/30 print is 8 days out.
- **For BW specifically**: OMCL has now held above the $40 line across two consecutive session-checks — worth logging as further validation that the contingency plan is working under real pressure, consistent with your own 14:45 ET report's framing. Also flagging: if NVDA's rally today pushes its equity weight further toward your new 18-20% trigger, that's the more time-sensitive open item for the trader's own book right now, ahead of any of this desk's watchlist names.

---

Sources:
- [Omnicell Stock Price Today | NASDAQ: OMCL Live (Investing.com)](https://www.investing.com/equities/omnicell)
- [OMCL Stock Price and Chart (TradingView)](https://www.tradingview.com/symbols/NASDAQ-OMCL/)
- [Micron (NASDAQ:MU) shares jump 12% as AI-driven memory prices come under scrutiny (ts2.tech)](https://ts2.tech/en/micron-nasdaqmu-shares-jump-12-as-ai-driven-memory-prices-come-under-scrutiny/)
- [Micron Technology (MU) Stock Price & Overview (StockAnalysis)](https://stockanalysis.com/stocks/mu/)
- [Astera Labs Stock Price Forecast (StockInvest.us)](https://stockinvest.us/stock/ALAB)
- [Astera Labs, Inc.: ALAB Stock Price Quote & News (Robinhood)](https://robinhood.com/us/en/stocks/ALAB/)
- [CrowdStrike Holdings (CRWD) Sees Bearish Sentiment Among Options Traders (GuruFocus)](https://www.gurufocus.com/news/8971893/crowdstrike-holdings-crwd-sees-bearish-sentiment-among-options-traders)
- [CRWD Maintained by Argus Research -- Price Target Raised to $230 (GuruFocus)](https://www.gurufocus.com/news/8971691/crwd-maintained-by-argus-research-price-target-raised-to-230)
- [CrowdStrike Holdings Inc (CRWD) Stock Down 3.7% but Still Overvalued -- GF Score: 79/100 (GuruFocus)](https://www.gurufocus.com/news/8970153/crowdstrike-holdings-inc-crwd-stock-down-37-but-still-overvalued-gf-score-79100)
- [Occidental Petroleum (OXY) Stock Price & Overview (StockAnalysis)](https://stockanalysis.com/stocks/oxy/)
- [Is Most-Watched Stock Occidental Petroleum Corporation (OXY) Worth Betting on Now? (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/most-watched-stock-occidental-petroleum-130002757.html)
- [What's Going on With Broadcom Stock Wednesday? (Benzinga)](https://www.benzinga.com/markets/tech/26/07/60605013/whats-going-on-with-broadcom-stock-wednesday-6)
- [Exelixis (EXEL) Earnings Dates, Call Summary & Reports (TipRanks)](https://www.tipranks.com/stocks/exel/earnings)
- [Stock Market Midday, July 22: Markets Brace for Alphabet Earnings as Hyperscaler's AI Debt Comes Into Focus (The Motley Fool)](https://www.fool.com/coverage/stock-market-today/2026/07/22/stock-market-midday-july-22-markets-brace-for-alphabet-earnings-as-hyperscaler-s-ai-debt-comes-under-spotlight/)
- [Stock market today: Dow, S&P 500, Nasdaq waver with Alphabet, Tesla earnings on deck (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-wednesday-july-22-dow-sp-500-nasdaq-alphabet-tesla-earnings-083644887.html)
